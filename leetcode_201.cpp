class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {

                //APPROACH - 1
       /*  int royCount = 0 ;

        while( left != right )
        {
            left = (left >> 1) ;
            right = (right >> 1) ;
            royCount++ ;
        }

        return (left << royCount);
 */

                //APPROACH-2

        while(right > left)
        {
            
            right = (right) & (right - 1) ; // (n) & (n-1)

        }

        return right ;

    }
};
