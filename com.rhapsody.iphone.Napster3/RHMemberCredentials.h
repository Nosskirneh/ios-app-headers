//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface RHMemberCredentials : NSObject
{
    NSString *_login;
    NSString *_password;
    NSString *_cobrandId;
}

@property(retain, nonatomic) NSString *cobrandId; // @synthesize cobrandId=_cobrandId;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSString *login; // @synthesize login=_login;
- (void).cxx_destruct;
- (id)initWithLogin:(id)arg1 password:(id)arg2 cobrandId:(id)arg3;

@end
