//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface M3U8SegmentInfo : NSObject
{
    NSDictionary *_dictionary;
}

@property(retain, nonatomic) NSDictionary *dictionary; // @synthesize dictionary=_dictionary;
- (void).cxx_destruct;
- (id)description;
@property(readonly, nonatomic) NSString *URI;
@property(readonly, nonatomic) double duration;
- (id)mediaURL;
- (id)baseURL;
- (id)initWithDictionary:(id)arg1;

@end
