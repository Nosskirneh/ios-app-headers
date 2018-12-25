//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GWAFlowSection-Protocol.h"
#import "GWAFocusDelegate-Protocol.h"
#import "GWASelectFieldViewDelegate-Protocol.h"

@class GWAComponentGroup, GWAFlowContext, GWASelectFieldView, NSArray, NSString, OrchCountrySelector, OrchFormFieldMessage, OrchFormFieldReference, UIColor, UIImage;
@protocol GWACardComponentDelegate, GWAFlowSectionDelegate;

@interface GWACountrySelectorFlowSection : NSObject <GWAFocusDelegate, GWASelectFieldViewDelegate, GWAFlowSection>
{
    GWAFlowContext *_context;
    GWASelectFieldView *_selectFieldView;
    OrchCountrySelector *_proto;
    OrchFormFieldReference *_reference;
    OrchFormFieldMessage *_serverError;
    id <GWAFlowSectionDelegate> _delegate;
    GWAComponentGroup *_parentComponentGroup;
}

@property(nonatomic) __weak GWAComponentGroup *parentComponentGroup; // @synthesize parentComponentGroup=_parentComponentGroup;
@property(nonatomic) __weak id <GWAFlowSectionDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)selectFieldViewDoneButtonPressed:(id)arg1;
- (void)selectFieldView:(id)arg1 didSetText:(id)arg2;
- (void)viewFocused:(id)arg1;
- (id)value;
- (void)handleErrorMessage:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *rows;
@property(readonly, nonatomic, getter=isSubmittable) _Bool submittable;
@property(readonly, nonatomic, getter=isComplete) _Bool complete;
@property(readonly, nonatomic) _Bool hasErrors;
@property(readonly, nonatomic, getter=isFocusable) _Bool focusable;
- (id)initWithCountrySelector:(id)arg1 context:(id)arg2;

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
