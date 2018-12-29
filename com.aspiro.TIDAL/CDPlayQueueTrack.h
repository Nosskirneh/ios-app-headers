//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CDPlayQueue, CDTrack, NSNumber, NSString;

@interface CDPlayQueueTrack : NSManagedObject
{
}

+ (id)entityName;

// Remaining properties
@property(retain, nonatomic) NSNumber *isCurrent; // @dynamic isCurrent;
@property(retain, nonatomic) NSNumber *order; // @dynamic order;
@property(retain, nonatomic) NSString *originatingPlaylistUuid; // @dynamic originatingPlaylistUuid;
@property(retain, nonatomic) NSString *originatingScreen; // @dynamic originatingScreen;
@property(retain, nonatomic) NSString *originatingSection; // @dynamic originatingSection;
@property(retain, nonatomic) CDPlayQueue *playQueue; // @dynamic playQueue;
@property(retain, nonatomic) CDTrack *track; // @dynamic track;
@property(retain, nonatomic) NSNumber *type; // @dynamic type;

@end

