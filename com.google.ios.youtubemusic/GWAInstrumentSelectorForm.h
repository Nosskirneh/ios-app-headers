//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWAFlowSection-Protocol.h"
#import "GWAForm-Protocol.h"
#import "GWASelectorOptionDelegate-Protocol.h"
#import "GWATriggerComponent-Protocol.h"

@class GWAComponentGroup, GWADependencyGraph, GWAFlowContext, NSArray, NSMutableArray, NSString, OrchInstrumentSelector, OrchInstrumentSelectorValue, UIColor, UIImage;
@protocol GWACardComponentDelegate, GWAFlowSectionDelegate, GWAForm;

@interface GWAInstrumentSelectorForm : NSObject <GWAFlowSection, GWASelectorOptionDelegate, GWAForm, GWATriggerComponent>
{
    OrchInstrumentSelector *_selectorProto;
    GWAFlowContext *_context;
    id <GWAForm> _visibleSubform;
    _Bool _isExpanded;
    id _selectedOption;
    id _selectedOptionToRestore;
    NSArray *_sectionRows;
    OrchInstrumentSelectorValue *_value;
    long long _optionCount;
    id <GWAForm> _previousForm;
    unsigned long long _previousRowIndex;
    GWADependencyGraph *_dependencyGraph;
    NSMutableArray *_triggers;
    id <GWAFlowSectionDelegate> _delegate;
    GWAComponentGroup *_parentComponentGroup;
}

@property(nonatomic) __weak GWAComponentGroup *parentComponentGroup; // @synthesize parentComponentGroup=_parentComponentGroup;
@property(nonatomic) __weak id <GWAFlowSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)selectedUiReference;
- (id)imageForAdditionalOption:(id)arg1;
- (_Bool)isOptionSelectable:(id)arg1;
- (void)saveValueFromInstrumentOption:(id)arg1;
- (id)triggers;
- (void)saveValueFromSubform:(id)arg1;
- (void)setSubformAndReload:(id)arg1;
- (void)headerTapped;
- (id)preselectedInstrumentOption:(id)arg1;
- (id)initialVisibleSubform;
- (id)objectForOption:(id)arg1;
- (id)openSelectorRows;
- (void)regenerateRows;
- (_Bool)hasUsableInstruments;
- (void)unnestInstrumentFormsIfNecessary;
- (_Bool)checkTrigger:(id)arg1;
- (void)addTriggers:(id)arg1;
- (void)registerWithDependencyGraph:(id)arg1;
- (void)rowTapped:(unsigned long long)arg1;
- (void)showActiveSection;
- (void)validate;
@property(readonly, copy, nonatomic) NSArray *rows;
@property(readonly, nonatomic) _Bool hasErrors;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic, getter=isSubmittable) _Bool submittable;
@property(readonly, nonatomic, getter=isFocusable) _Bool focusable;
- (id)displaySummary;
- (id)sections;
- (_Bool)didHandleErrorMessage:(id)arg1;
- (id)value;
- (void)selectorOptionSelected:(id)arg1;
- (id)initWithInstrumentSelector:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) UIColor *backgroundColor;
@property(nonatomic) __weak id <GWACardComponentDelegate> cardComponentDelegate;
@property(readonly, nonatomic) unsigned long long cellDividerStyleInsets;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) unsigned long long fieldDisplayType;
@property(retain, nonatomic) UIImage *fieldGroupIcon;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) _Bool wantsCellDividers;

@end

