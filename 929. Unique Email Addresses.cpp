// 929. Unique Email Addresses : https://leetcode.com/problems/unique-email-addresses/description/

class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> mails;

        for (int i = 0; i < emails.size(); i++) {
            string email = emails[i];
            string clean_email = "";

            for (int j = 0; j < email.size(); j++) {
                if (email[j] == '.') {
                    continue;
                } else if (email[j] == '+' || email[j] == '@') {
                    break;
                }
                clean_email += email[j];
            }

            clean_email += email.substr(email.find('@'), email.size() - 1);
            mails.insert(clean_email);
        }

        return mails.size();
    }
};