//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ANGAudioStreamState : NSObject
{
    _Bool _isVideo;
    double _position;
    NSString *_cacheFileName;
    NSString *_songId;
    double _totalTimePlayed;
}

@property(nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic) double totalTimePlayed; // @synthesize totalTimePlayed=_totalTimePlayed;
@property(retain, nonatomic) NSString *songId; // @synthesize songId=_songId;
@property(readonly, nonatomic) NSString *cacheFileName; // @synthesize cacheFileName=_cacheFileName;
@property(nonatomic) double position; // @synthesize position=_position;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPosition:(double)arg1 cacheFileName:(id)arg2 songId:(id)arg3 totalTimePlayed:(double)arg4;

@end

