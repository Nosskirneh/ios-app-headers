//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHKSharer.h"

@class NSMutableDictionary;

@interface SHKGoogleReader : SHKSharer
{
    NSMutableDictionary *session;
}

+ (id)authorizationFormFields;
+ (id)authorizationFormCaption;
+ (_Bool)canShareURL;
+ (id)sharerTitle;
@property(retain, nonatomic) NSMutableDictionary *session; // @synthesize session;
- (void)shareFormSave:(id)arg1;
- (void)sendFinished:(id)arg1;
- (void)sendWithToken:(id)arg1;
- (void)tokenFinished:(id)arg1;
- (_Bool)send;
- (void)signRequest:(id)arg1;
- (id)shareFormFieldsForType:(int)arg1;
- (void)authFinished:(id)arg1;
- (void)getSession:(id)arg1 password:(id)arg2;
- (void)authorizationFormValidate:(id)arg1;
- (void)dealloc;

@end

