/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "add.h"

int *
add_1_svc(numbers *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */
	printf("The two numbers passed by the client are %d and %d\n", argp->num1,
		   argp->num2);
	result = argp->num1 + argp->num2;

	return &result;
}
