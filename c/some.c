char *s1, *s2, *result; /* original strings and the result string */
int len1, len2; /* lengths of the strings */
for (i = 0; i < len1; i++) {
   for (j = 0; j < len2; j++) {
     if (s1[i] == s2[j]) {
       break;
     }
   }
   if (j == len2) {  /* s1[i] is not found in s2 */
     *result = s1[i]; 
     result++; /* assuming your result array is long enough */
   }
}
