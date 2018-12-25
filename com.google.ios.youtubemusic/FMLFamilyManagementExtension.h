//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class FMLClientInfo, FMLErrorEvent, FMLFamiliesServiceLog, FMLFamilyChangeLog, FMLFamilyEventServiceLog, FMLFamilyManagementEvent, FMLFamilyManagementVisualElement, FMLFamilySetupEvent;

@interface FMLFamilyManagementExtension : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) FMLClientInfo *clientInfo; // @dynamic clientInfo;
@property(retain, nonatomic) FMLErrorEvent *errorEvent; // @dynamic errorEvent;
@property(retain, nonatomic) FMLFamiliesServiceLog *familiesServiceLog; // @dynamic familiesServiceLog;
@property(retain, nonatomic) FMLFamilyChangeLog *familyChange; // @dynamic familyChange;
@property(retain, nonatomic) FMLFamilyEventServiceLog *familyEventService; // @dynamic familyEventService;
@property(retain, nonatomic) FMLFamilyManagementEvent *familyManagementEvent; // @dynamic familyManagementEvent;
@property(retain, nonatomic) FMLFamilySetupEvent *familySetupEvent; // @dynamic familySetupEvent;
@property(nonatomic) _Bool hasClientInfo; // @dynamic hasClientInfo;
@property(nonatomic) _Bool hasErrorEvent; // @dynamic hasErrorEvent;
@property(nonatomic) _Bool hasFamiliesServiceLog; // @dynamic hasFamiliesServiceLog;
@property(nonatomic) _Bool hasFamilyChange; // @dynamic hasFamilyChange;
@property(nonatomic) _Bool hasFamilyEventService; // @dynamic hasFamilyEventService;
@property(nonatomic) _Bool hasFamilyManagementEvent; // @dynamic hasFamilyManagementEvent;
@property(nonatomic) _Bool hasFamilySetupEvent; // @dynamic hasFamilySetupEvent;
@property(nonatomic) _Bool hasVisualElement; // @dynamic hasVisualElement;
@property(retain, nonatomic) FMLFamilyManagementVisualElement *visualElement; // @dynamic visualElement;

@end
