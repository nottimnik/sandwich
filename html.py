class page:

    #when a new page is 
    def __init__(self, page_name):
        #name of the file that will be stored globaly
        self.file_name = page_name

        '''
        First it tries to create the file with the given name (to see if the page already exists)
        If the file doesn't exists it will create a file_name.html file with a html template
        If the file already exists it does nothing to it
        '''
        try: #tries to create the html file
            #creates the html file
            f = open(f"{page_name}.html","x")

            #opens the file in write mode
            f = open(f"{page_name}.html","w")

            #html template
            f.write("<!DOCTYPE html>\n")
            f.write("<html>\n")
            f.write("<head>\n")
            f.write(f"   <title>{page_name}</title>\n")
            f.write("</head>\n")
            f.write("<body>\n")
            f.write("</body>\n")
            f.write("</html>")

        except IOError: #changes nothing to te file if the file already exists
            open(f"{page_name}.html","a")