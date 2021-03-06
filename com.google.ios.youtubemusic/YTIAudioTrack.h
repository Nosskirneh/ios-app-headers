//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTIAudioTrack : GPBMessage
{
}

+ (id)descriptor;
+ (id)audioTrackWithID:(id)arg1 displayName:(id)arg2 audioIsDefault:(_Bool)arg3;
- (_Bool)isEqualToAudioTrack:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

// Remaining properties
@property(nonatomic) _Bool audioIsDefault; // @dynamic audioIsDefault;
@property(copy, nonatomic) NSString *displayName; // @dynamic displayName;
@property(nonatomic) _Bool hasAudioIsDefault; // @dynamic hasAudioIsDefault;
@property(nonatomic) _Bool hasDisplayName; // @dynamic hasDisplayName;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;

@end

