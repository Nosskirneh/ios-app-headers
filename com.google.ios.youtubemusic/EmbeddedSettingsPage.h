//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, OrchDependencyGraph, OrchWebViewComponent;

@interface EmbeddedSettingsPage : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionBarArray; // @dynamic actionBarArray;
@property(readonly, nonatomic) unsigned long long actionBarArray_Count; // @dynamic actionBarArray_Count;
@property(retain, nonatomic) NSMutableArray *cardHeaderArray; // @dynamic cardHeaderArray;
@property(readonly, nonatomic) unsigned long long cardHeaderArray_Count; // @dynamic cardHeaderArray_Count;
@property(retain, nonatomic) NSMutableArray *componentGroupArray; // @dynamic componentGroupArray;
@property(readonly, nonatomic) unsigned long long componentGroupArray_Count; // @dynamic componentGroupArray_Count;
@property(retain, nonatomic) NSMutableArray *confirmationDialogArray; // @dynamic confirmationDialogArray;
@property(readonly, nonatomic) unsigned long long confirmationDialogArray_Count; // @dynamic confirmationDialogArray_Count;
@property(retain, nonatomic) NSMutableArray *customerSelectorArray; // @dynamic customerSelectorArray;
@property(readonly, nonatomic) unsigned long long customerSelectorArray_Count; // @dynamic customerSelectorArray_Count;
@property(retain, nonatomic) OrchDependencyGraph *dependencyGraph; // @dynamic dependencyGraph;
@property(retain, nonatomic) NSMutableArray *dynamicListArray; // @dynamic dynamicListArray;
@property(readonly, nonatomic) unsigned long long dynamicListArray_Count; // @dynamic dynamicListArray_Count;
@property(nonatomic) _Bool hasDependencyGraph; // @dynamic hasDependencyGraph;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasWebViewComponent; // @dynamic hasWebViewComponent;
@property(retain, nonatomic) NSMutableArray *partialUpdateDataArray; // @dynamic partialUpdateDataArray;
@property(readonly, nonatomic) unsigned long long partialUpdateDataArray_Count; // @dynamic partialUpdateDataArray_Count;
@property(retain, nonatomic) NSMutableArray *simpleFormArray; // @dynamic simpleFormArray;
@property(readonly, nonatomic) unsigned long long simpleFormArray_Count; // @dynamic simpleFormArray_Count;
@property(retain, nonatomic) NSMutableArray *tableArray; // @dynamic tableArray;
@property(readonly, nonatomic) unsigned long long tableArray_Count; // @dynamic tableArray_Count;
@property(retain, nonatomic) NSMutableArray *taxInfoFormArray; // @dynamic taxInfoFormArray;
@property(readonly, nonatomic) unsigned long long taxInfoFormArray_Count; // @dynamic taxInfoFormArray_Count;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) OrchWebViewComponent *webViewComponent; // @dynamic webViewComponent;
@property(retain, nonatomic) NSMutableArray *widgetLinkArray; // @dynamic widgetLinkArray;
@property(readonly, nonatomic) unsigned long long widgetLinkArray_Count; // @dynamic widgetLinkArray_Count;

@end
