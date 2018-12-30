//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHKOAuthSharer.h"

@interface SHKReadability : SHKOAuthSharer
{
    _Bool xAuth;
}

+ (id)authorizationFormFields;
+ (id)authorizationFormCaption;
+ (void)logout;
+ (_Bool)canShareURL;
+ (id)sharerTitle;
@property _Bool xAuth; // @synthesize xAuth;
- (void)shareFormSave:(id)arg1;
- (void)handleUnsuccessfulTicket:(id)arg1;
- (void)sendBookmarkTicket:(id)arg1 didFailWithError:(id)arg2;
- (void)sendBookmarkTicket:(id)arg1 didFinishWithData:(id)arg2;
- (void)sendBookmark;
- (_Bool)send;
- (id)shareFormFieldsForType:(int)arg1;
- (void)tokenAccessTicket:(id)arg1 didFinishWithData:(id)arg2;
- (void)tokenAccessModifyRequest:(id)arg1;
- (void)authorizationFormValidate:(id)arg1;
- (void)promptAuthorization;
- (_Bool)isAuthorized;
- (id)init;

@end

