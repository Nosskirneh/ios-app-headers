//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GWAWidgetOptions, NSDictionary, NSSet, OrchLegalMessage, PostalAddress, QTMColorGroup;
@protocol SSOIdentity, SSOService;

@interface GWAFlowContext : NSObject
{
    NSDictionary *_screenDetails;
    NSSet *_refreshFields;
    OrchLegalMessage *_legalMessage;
    QTMColorGroup *_colorGroup;
    QTMColorGroup *_errorColorGroup;
    QTMColorGroup *_headerColorGroup;
    PostalAddress *_addressHint;
    long long _widgetType;
    GWAWidgetOptions *_widgetOptions;
    long long _environment;
    id <SSOIdentity> _identity;
    id <SSOService> _ssoService;
}

@property(retain, nonatomic) id <SSOService> ssoService; // @synthesize ssoService=_ssoService;
@property(retain, nonatomic) id <SSOIdentity> identity; // @synthesize identity=_identity;
@property(readonly, nonatomic) long long environment; // @synthesize environment=_environment;
@property(retain, nonatomic) GWAWidgetOptions *widgetOptions; // @synthesize widgetOptions=_widgetOptions;
@property(readonly, nonatomic) long long widgetType; // @synthesize widgetType=_widgetType;
@property(retain, nonatomic) PostalAddress *addressHint; // @synthesize addressHint=_addressHint;
@property(retain, nonatomic) QTMColorGroup *headerColorGroup; // @synthesize headerColorGroup=_headerColorGroup;
@property(retain, nonatomic) QTMColorGroup *errorColorGroup; // @synthesize errorColorGroup=_errorColorGroup;
@property(retain, nonatomic) QTMColorGroup *colorGroup; // @synthesize colorGroup=_colorGroup;
- (void).cxx_destruct;
- (void)setLegalMessage:(id)arg1;
- (void)setScreenDetails:(id)arg1;
- (void)setRefreshFields:(id)arg1;
- (void)setRefreshTriggerFields:(id)arg1;
@property(readonly, nonatomic) OrchLegalMessage *legalMessage;
- (_Bool)fieldShouldTriggerRefresh:(id)arg1;
- (id)screenDetailsForScreenWithId:(id)arg1;
- (id)initForWidgetType:(long long)arg1 environment:(long long)arg2;
- (id)init;

@end

