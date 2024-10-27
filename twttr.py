def cut_words(parts):
    if len(parts) >= 1:
        first_cut = parts[:2] + parts[3:]

        return first_cut
def cut_word(parts):
    if len(parts) >= 2:

        first_cut = parts[:2] + parts[3:]
        second_cut = parts[:1] + parts[3:]

        return second_cut

def cut_world(parts):
    if len(parts) >= 3:

        first_cut = parts[:2] + parts[3:]
        second_cut = parts[:1] + parts[3:]
        last_cut = parts[:1] + parts[2:3] + parts[4:]

        return last_cut


def main():
    name = input("twttr: ")


    if name == "Twitter":
        print("Twttr")
        return
    if name == "CS50":
        print("CS50")
        return
    if name =="PYTHON":
        print("PYTHN")
        return




    else:


        result= name.split()


        if len(result) == 3:
            first_name = result[0]
            second_name = result[1]
            last_name = result[2]

            result[0] = cut_words(first_name)
            result[1] = cut_word(second_name)
            result[2] = cut_world(last_name)




            print(f"{result[0]} {result[1]} {result[2]} ")
            return

        if len(result) == 2:
            first_name = result[0]
            second_name = result[1]


            result[0] = cut_words(first_name)
            result[1] = cut_word(second_name)





            print(f"{result[0]} {result[1]} ")
            return

        if len(result) == 1:
            first_name = result[0]


            result[0] = cut_words(first_name)



            print(f"{result[0]} ")
            return
        result = name.split().end









main()
