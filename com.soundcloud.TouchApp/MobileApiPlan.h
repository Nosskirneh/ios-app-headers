//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSString;
@protocol _TtP8Features24ConsumerSubscriptionPlan_;

@interface MobileApiPlan : MTLModel <MTLJSONSerializing>
{
    id <_TtP8Features24ConsumerSubscriptionPlan_> _plan;
    NSArray *_upsells;
    NSString *_vendor;
}

+ (id)vendorJSONTransformer;
+ (id)upsellsJSONTransformer;
+ (id)planJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *vendor; // @synthesize vendor=_vendor;
@property(retain, nonatomic) NSArray *upsells; // @synthesize upsells=_upsells;
@property(retain, nonatomic) id <_TtP8Features24ConsumerSubscriptionPlan_> plan; // @synthesize plan=_plan;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;

@end

