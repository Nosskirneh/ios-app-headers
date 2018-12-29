//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface M3U8ExtXStreamInf : NSObject
{
    NSDictionary *_dictionary;
}

@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *URI;
@property(readonly, nonatomic) NSString *closedCaptions;
@property(readonly, nonatomic) NSString *subtitles;
@property(readonly, nonatomic) NSString *video;
@property(readonly, nonatomic) NSString *audio;
@property(readonly, nonatomic) struct MediaResoulution resolution;
@property(readonly, nonatomic) NSString *codecs;
@property(readonly, nonatomic) long long programId;
@property(readonly, nonatomic) long long bandwidth;
- (id)m3u8URL;
- (id)baseURL;
- (id)initWithDictionary:(id)arg1;

@end

