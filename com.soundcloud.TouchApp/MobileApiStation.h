//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSString, Urn;

@interface MobileApiStation : MTLModel <MTLJSONSerializing>
{
    NSString *_title;
    Urn *_urn;
    unsigned long long _type;
    NSString *_artworkUrlTemplate;
}

+ (id)urnJSONTransformer;
+ (id)typeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *artworkUrlTemplate; // @synthesize artworkUrlTemplate=_artworkUrlTemplate;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) Urn *urn; // @synthesize urn=_urn;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;

@end

