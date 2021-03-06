//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FlurryStreamEntityBase.h"

@class NSString;

@interface FlurryStreamVersion : FlurryStreamEntityBase
{
    int _frameType;
    NSString *_version;
    NSString *_versionID;
}

+ (id)streamEntityFromJSONData:(id)arg1;
+ (id)streamVersionWithID:(id)arg1;
@property(retain, nonatomic) NSString *versionID; // @synthesize versionID=_versionID;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
- (void)setFrameType:(int)arg1;
- (int)frameType;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithID:(id)arg1;

@end

