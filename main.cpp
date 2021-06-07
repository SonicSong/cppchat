#include <iostream>
#include <string>
#include <curl/curl.h>

using namespace std;

int main(void){
	CURL* curl;
	CURLcode result;

	curl = curl_easy_init();
	curl_easy_setopt(curl, CURLOPT_URL, "https://rate.sx/1btc");
	result = curl_easy_perform(curl);
	curl_easy_cleanup(curl);

	return 0;
}
