
#ifndef SMOOTHIMAGE_H
#define SMOOTHIMAGE_H

namespace ants
{
int SmoothImage( std::vector<std::string>,  // equivalent to argv of command line parameters to main()
                 std::ostream* out_stream   // [optional] output stream to write
                 );
} // namespace ants

#endif // SMOOTHIMAGE_H
