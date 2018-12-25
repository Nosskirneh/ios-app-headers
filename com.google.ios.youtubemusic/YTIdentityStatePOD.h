//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YTIAccountItemRenderer;

@interface YTIdentityStatePOD : NSObject
{
    NSString *_identityID;
    YTIAccountItemRenderer *_accountItemRenderer;
}

+ (id)stringForKey:(id)arg1 fromDictionary:(id)arg2;
+ (id)deserializeFromLegacyDictionary:(id)arg1;
+ (id)accountItemFromDictionary:(id)arg1;
+ (id)deserializeFromDictionary:(id)arg1;
@property(copy, nonatomic) YTIAccountItemRenderer *accountItemRenderer; // @synthesize accountItemRenderer=_accountItemRenderer;
@property(copy, nonatomic) NSString *identityID; // @synthesize identityID=_identityID;
- (void).cxx_destruct;
- (id)serialize;
- (id)initWithIdentityID:(id)arg1 accountItemRenderer:(id)arg2;

@end
