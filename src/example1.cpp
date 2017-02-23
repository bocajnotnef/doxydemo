/** 
 * \file example1.cpp
 * \author Jake Fenton
 *
 *  This is a file containing example code for a doxygen demonstration
 */


/** 
 * \brief This is a brief decription of this class
 *
 * This is an example class, with a comment that'll become documentation later.
 * This class contains multiple functions and members, which should all be documented.
 * Since `EXTRACT_PRIVATE` is enabled in the doxyfile, private members and methods will be
 * documented as well.
 *
 * Also note that `backticks` within a doxycomment block *will* render monospace, just as 
 * *this* will render italics and **this** will render boldface.
 *
 * This blurb of text will be placed after the brief, and can be used to provide a wider picture of
 * what this class is for.
 *
 */
class ExampleClass {

public:
  /** \brief This is the default constructor
   *
   * GNDN
   */
  ExampleClass() {}


  /** \brief This is a constructor that takes some parameters, which we can document!
   *
   *
   * \param someint an integer that will become our favorite integer
   * \param somedouble a double we don't really care about
   * \param somelong a long that's just kinda there
   */
  ExampleClass(int someint, double somedouble, long somelong) : OurFavoriteInt(someint),
                                                                OurFavoriteDouble(somedouble),
                                                                OurFavoriteLong(somelong) {
  }
  

private:

  /* Note the difference in the following member comments when documented;
   *
   * the ///< will be included in the extended section, but not the brief descrition
   * the ///'s will both be included in the brief and extended sections.
   */

  int OurFavoriteInt; ///< This comment will descirbe OurFavoriteInt
  /// This comment will be attatched to OurFavoriteDouble
  double OurFavoriteDouble; /// This comment will be attatched to OurFavoriteLong
  long OurFavoriteLong;
};
