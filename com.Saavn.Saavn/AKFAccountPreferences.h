//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol AKFAccessToken, AKFAccountPreferencesDelegate, AKFGraphURLSessionProvider;

@interface AKFAccountPreferences : NSObject
{
    id <AKFAccessToken> _accessToken;
    id <AKFGraphURLSessionProvider> _sessionProvider;
    id <AKFAccountPreferencesDelegate> _delegate;
}

@property(nonatomic) __weak id <AKFAccountPreferencesDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_validateTokenStringWithError:(id *)arg1;
- (_Bool)_validateValue:(id)arg1 error:(id *)arg2;
- (_Bool)_validateKey:(id)arg1 error:(id *)arg2;
- (void)_didSetPreferenceForKey:(id)arg1 value:(id)arg2 result:(id)arg3 error:(id)arg4;
- (void)_didLoadPreferencesWithResult:(id)arg1 error:(id)arg2;
- (void)_didLoadPreferenceForKey:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)_didDeletePreferenceForKey:(id)arg1 result:(id)arg2 error:(id)arg3;
- (void)setPreferenceForKey:(id)arg1 value:(id)arg2;
- (void)loadPreferences;
- (void)loadPreferenceForKey:(id)arg1;
- (void)deletePreferenceForKey:(id)arg1;
- (id)initWithAccessToken:(id)arg1 sessionProvider:(id)arg2;

@end

