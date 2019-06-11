std::string str; 
std::vector<unsigned char> buff; 
cv::imencode(".jpg", requestFace, buff);//requestFace为opencv的Mat类。 
str.resize(buff.size()); 
memcpy(&str[0], buff.data(), buff.size());

//convert to base64
std::string requestStr; 
requestStr = base64_encode(reinterpret_cast<const unsigned char*>(str.data()), str.size());	
