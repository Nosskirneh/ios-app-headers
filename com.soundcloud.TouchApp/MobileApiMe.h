//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class MobileApiConfiguration, MobileApiUser;

@interface MobileApiMe : MTLModel <MTLJSONSerializing>
{
    MobileApiUser *_user;
    MobileApiConfiguration *_configuration;
}

+ (id)configurationJSONTransformer;
+ (id)userJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) MobileApiConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) MobileApiUser *user; // @synthesize user=_user;
- (void).cxx_destruct;

@end

