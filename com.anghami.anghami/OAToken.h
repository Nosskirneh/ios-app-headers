//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface OAToken : NSObject
{
    NSString *key;
    NSString *secret;
    NSString *sessionHandle;
    NSString *screenName;
}

@property(retain) NSString *screenName; // @synthesize screenName;
@property(retain) NSString *sessionHandle; // @synthesize sessionHandle;
@property(retain) NSString *secret; // @synthesize secret;
@property(retain) NSString *key; // @synthesize key;
- (int)storeInUserDefaultsWithServiceProviderName:(id)arg1 prefix:(id)arg2;
- (void)dealloc;
- (id)initWithUserDefaultsUsingServiceProviderName:(id)arg1 prefix:(id)arg2;
- (id)initWithHTTPResponseBody:(id)arg1;
- (id)initWithKey:(id)arg1 secret:(id)arg2;
- (id)init;

@end

