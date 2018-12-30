//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface SCMediaTypeConfiguration : NSObject
{
    _Bool _enabled;
    _Bool _shouldIgnore;
    unsigned long long _bitrate;
    NSDictionary *_options;
    NSString *_preset;
}

@property(copy, nonatomic) NSString *preset; // @synthesize preset=_preset;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(nonatomic) unsigned long long bitrate; // @synthesize bitrate=_bitrate;
@property(nonatomic) _Bool shouldIgnore; // @synthesize shouldIgnore=_shouldIgnore;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (id)createAssetWriterOptionsUsingSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (id)init;

@end

