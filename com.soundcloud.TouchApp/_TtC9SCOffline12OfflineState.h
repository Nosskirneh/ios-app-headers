//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString, Urn;

@interface _TtC9SCOffline12OfflineState : NSManagedObject
{
}

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;
@property(nonatomic, readonly) unsigned long long state;
@property(nonatomic, readonly) Urn *trackUrn;

// Remaining properties
@property(nonatomic, retain) NSDate *createdAt; // @dynamic createdAt;
@property(nonatomic, retain) NSNumber *stateNumber; // @dynamic stateNumber;
@property(nonatomic, copy) NSString *trackUrnString; // @dynamic trackUrnString;
@property(nonatomic, retain) NSDate *updatedAt; // @dynamic updatedAt;

@end

