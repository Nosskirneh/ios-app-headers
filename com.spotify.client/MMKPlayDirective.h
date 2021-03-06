//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMKMessage.h"

@class NSString;

@interface MMKPlayDirective : MMKMessage
{
    unsigned int _index;
    unsigned int _offsetInMilliseconds;
    unsigned long long _directiveName;
    NSString *_playbackContextToken;
}

@property(readonly, nonatomic) unsigned int offsetInMilliseconds; // @synthesize offsetInMilliseconds=_offsetInMilliseconds;
@property(readonly, nonatomic) unsigned int index; // @synthesize index=_index;
@property(readonly, nonatomic) NSString *playbackContextToken; // @synthesize playbackContextToken=_playbackContextToken;
@property(readonly, nonatomic) unsigned long long directiveName; // @synthesize directiveName=_directiveName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDirectiveName:(unsigned long long)arg1 playbackContextToken:(id)arg2 index:(unsigned int)arg3 offsetInMilliseconds:(unsigned int)arg4;

@end

