//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TV4InhouseAccount : NSObject
{
    NSString *username;
    NSString *userId;
    NSString *password;
    NSString *_email;
}

@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *password; // @synthesize password;
@property(copy, nonatomic) NSString *userId; // @synthesize userId;
@property(copy, nonatomic) NSString *username; // @synthesize username;
- (void).cxx_destruct;
- (void)purgeAfterLogout;
- (_Bool)isFreemiumOnly;
- (_Bool)hasValidProductForVideoAsset:(id)arg1;
- (id)initWithEmail:(id)arg1 password:(id)arg2 userId:(id)arg3;

@end

