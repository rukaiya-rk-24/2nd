vector<int> freq(26,0);
for(int i=0;i<s.length();i++) freq[s[i]-'a']++;
int ans=-1;
for(int i=0;i<s.length();i++){
  if(freq[s[i]]==1) return i;
}
return ans;
