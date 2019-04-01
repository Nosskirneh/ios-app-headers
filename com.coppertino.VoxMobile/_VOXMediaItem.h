//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, NSString, VOXMediaItemID;

@interface _VOXMediaItem : NSManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;
- (void)setPrimitiveSourceTypeValue:(short)arg1;
- (short)primitiveSourceTypeValue;
@property short sourceTypeValue;
- (void)setPrimitiveIsLocalValue:(_Bool)arg1;
- (_Bool)primitiveIsLocalValue;
@property _Bool isLocalValue;
@property(readonly, nonatomic) VOXMediaItemID *objectID;

// Remaining properties
@property(retain, nonatomic) NSString *artworkURL; // @dynamic artworkURL;
@property(retain, nonatomic) NSDate *dateAdded; // @dynamic dateAdded;
@property(retain, nonatomic) NSDate *dateModified; // @dynamic dateModified;
@property(retain, nonatomic) NSNumber *isLocal; // @dynamic isLocal;
@property(retain, nonatomic) NSString *normalizedTitle; // @dynamic normalizedTitle;
@property(retain, nonatomic) NSNumber *sourceType; // @dynamic sourceType;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *titleForSort; // @dynamic titleForSort;
@property(retain, nonatomic) NSString *updateToken; // @dynamic updateToken;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

