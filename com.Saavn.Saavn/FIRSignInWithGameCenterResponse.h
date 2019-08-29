//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRAuthRPCResponse-Protocol.h"

@class NSDate, NSString;

@interface FIRSignInWithGameCenterResponse : NSObject <FIRAuthRPCResponse>
{
    _Bool _isNewUser;
    NSString *_IDToken;
    NSString *_refreshToken;
    NSString *_localID;
    NSString *_playerID;
    NSDate *_approximateExpirationDate;
    NSString *_displayName;
}

@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) _Bool isNewUser; // @synthesize isNewUser=_isNewUser;
@property(readonly, copy, nonatomic) NSDate *approximateExpirationDate; // @synthesize approximateExpirationDate=_approximateExpirationDate;
@property(readonly, copy, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(readonly, copy, nonatomic) NSString *localID; // @synthesize localID=_localID;
@property(readonly, copy, nonatomic) NSString *refreshToken; // @synthesize refreshToken=_refreshToken;
@property(readonly, copy, nonatomic) NSString *IDToken; // @synthesize IDToken=_IDToken;
- (void).cxx_destruct;
- (_Bool)setWithDictionary:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

