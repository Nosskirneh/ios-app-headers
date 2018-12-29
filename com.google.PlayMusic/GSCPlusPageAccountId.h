//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GSCAccountId-Protocol.h"

@class GSCGAIAAccountId, NSString;

@interface GSCPlusPageAccountId : NSObject <GSCAccountId>
{
    long long _type;
    NSString *_gaiaId;
    NSString *_authorizerGAIAId;
}

@property(readonly, nonatomic) NSString *authorizerGAIAId; // @synthesize authorizerGAIAId=_authorizerGAIAId;
@property(readonly, nonatomic) NSString *gaiaId; // @synthesize gaiaId=_gaiaId;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) GSCGAIAAccountId *authorizerAccountId; // @dynamic authorizerAccountId;
@property(readonly, nonatomic) NSString *identifier;
- (id)initWithGAIAId:(id)arg1 authorizerGAIAId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
