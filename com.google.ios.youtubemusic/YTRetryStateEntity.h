//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString;

@interface YTRetryStateEntity : NSManagedObject
{
}


// Remaining properties
@property(retain, nonatomic) NSDate *maxRetryDate; // @dynamic maxRetryDate;
@property(retain, nonatomic) NSDate *nextRetryDate; // @dynamic nextRetryDate;
@property(nonatomic) unsigned long long retryCount; // @dynamic retryCount;
@property(copy, nonatomic) NSString *userID; // @dynamic userID;
@end

