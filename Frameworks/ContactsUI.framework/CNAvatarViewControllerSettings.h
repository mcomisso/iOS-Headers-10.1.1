/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNAvatarViewControllerSettings : NSObject {
    CNContactStore * _contactStore;
    <CNUIPRLikenessResolver> * _likenessResolver;
    PRPersonaStore * _personaStore;
    bool  _threeDTouchEnabled;
}

@property (nonatomic, retain) CNContactStore *contactStore;
@property (nonatomic, retain) <CNUIPRLikenessResolver> *likenessResolver;
@property (nonatomic, retain) PRPersonaStore *personaStore;
@property (nonatomic) bool threeDTouchEnabled;

+ (id)defaultSettings;
+ (id)settingsWithContactStore:(id)arg1;
+ (id)settingsWithContactStore:(id)arg1 personaStore:(id)arg2 threeDTouchEnabled:(bool)arg3;
+ (id)settingsWithContactStore:(id)arg1 threeDTouchEnabled:(bool)arg2;
+ (id)settingsWithLikenessResolver:(id)arg1 threeDTouchEnabled:(bool)arg2;
+ (bool)threeDTouchEnabledDefaultValue;

- (void).cxx_destruct;
- (id)contactStore;
- (id)initWithLikenessResolver:(id)arg1 threeDTouchEnabled:(bool)arg2;
- (id)likenessResolver;
- (id)personaStore;
- (void)setContactStore:(id)arg1;
- (void)setLikenessResolver:(id)arg1;
- (void)setPersonaStore:(id)arg1;
- (void)setThreeDTouchEnabled:(bool)arg1;
- (bool)threeDTouchEnabled;

@end
