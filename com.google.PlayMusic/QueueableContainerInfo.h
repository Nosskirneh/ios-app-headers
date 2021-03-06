//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface QueueableContainerInfo : NSObject
{
    NSString *_containerID;
    long long _containerType;
    NSString *_containerSecondaryID;
    NSString *_title;
    NSString *_subtitle;
    NSArray *_tracks;
    NSString *_eventReportingID;
}

+ (_Bool)isRadioContainerType:(long long)arg1;
+ (_Bool)isDynamicContainerType:(long long)arg1;
+ (_Bool)canConstructContainerTypeFromDB:(long long)arg1;
+ (id)infoWithID:(id)arg1 type:(long long)arg2 secondaryID:(id)arg3 title:(id)arg4 subtitle:(id)arg5 eventReportingID:(id)arg6 tracks:(id)arg7;
+ (id)infoWithID:(id)arg1 type:(long long)arg2 secondaryID:(id)arg3 title:(id)arg4 subtitle:(id)arg5 eventReportingID:(id)arg6;
@property(readonly, copy, nonatomic) NSString *eventReportingID; // @synthesize eventReportingID=_eventReportingID;
@property(copy, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *containerSecondaryID; // @synthesize containerSecondaryID=_containerSecondaryID;
@property(nonatomic) long long containerType; // @synthesize containerType=_containerType;
@property(copy, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
- (void).cxx_destruct;
- (_Bool)isAssociatedWithItem:(id)arg1;
- (_Bool)isDynamicContainer;
- (_Bool)isRadioContainer;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithID:(id)arg1 type:(long long)arg2 secondaryID:(id)arg3 title:(id)arg4 subtitle:(id)arg5 eventReportingID:(id)arg6 tracks:(id)arg7;
- (id)tagDictionaryWithRadioStation:(id)arg1;
- (id)playLogContainerWithRadioStation:(id)arg1;

@end

