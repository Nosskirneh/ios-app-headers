//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class CDTrack, NSString;

@interface CDTranscoding : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(nonatomic) long long duration; // @dynamic duration;
@property(nonatomic, copy) NSString *mimeType; // @dynamic mimeType;
@property(nonatomic, copy) NSString *preset; // @dynamic preset;
@property(nonatomic, copy) NSString *protocol; // @dynamic protocol;
@property(nonatomic, copy) NSString *quality; // @dynamic quality;
@property(nonatomic) _Bool snipped; // @dynamic snipped;
@property(nonatomic, retain) CDTrack *track; // @dynamic track;
@property(nonatomic, copy) NSString *url; // @dynamic url;

@end

