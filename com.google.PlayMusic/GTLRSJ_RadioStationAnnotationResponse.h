//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRObject.h"

@class GTLRSJ_RadioStationAnnotation, NSArray, NSString;

@interface GTLRSJ_RadioStationAnnotationResponse : GTLRObject
{
}

+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(retain, nonatomic) GTLRSJ_RadioStationAnnotation *primaryStation; // @dynamic primaryStation;
@property(retain, nonatomic) NSArray *relatedGroups; // @dynamic relatedGroups;

@end

