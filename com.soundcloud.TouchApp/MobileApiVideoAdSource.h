//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString, NSURL;

@interface MobileApiVideoAdSource : MTLModel <MTLJSONSerializing>
{
    NSString *_type;
    NSURL *_streamUrl;
    NSNumber *_bitrate;
    NSNumber *_width;
    NSNumber *_height;
}

+ (id)streamUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(retain, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(retain, nonatomic) NSNumber *bitrate; // @synthesize bitrate=_bitrate;
@property(retain, nonatomic) NSURL *streamUrl; // @synthesize streamUrl=_streamUrl;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)validate:(id *)arg1;

@end

