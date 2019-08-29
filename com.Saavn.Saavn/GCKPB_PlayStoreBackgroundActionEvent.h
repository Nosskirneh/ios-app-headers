//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCKPB_PBGeneratedMessage.h"

@class GCKPB_AppData, GCKPB_AuthContext, GCKPB_BillingProfileData, GCKPB_CheckIabPromoData, GCKPB_CreditCardEntryAction, GCKPB_DeviceFeature, GCKPB_NlpRepairStatus, GCKPB_PlayStoreRpcReport, GCKPB_PlayStoreSessionData, GCKPB_ReviewData, GCKPB_SearchSuggestionReport, GCKPB_WebViewPageLoadEvent, GCKPB_WidgetEventData, GCKPB_WifiAutoUpdateAttempt, NSData, NSString;

@interface GCKPB_PlayStoreBackgroundActionEvent : GCKPB_PBGeneratedMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GCKPB_AppData *appData; // @dynamic appData;
@property(nonatomic) int attempts; // @dynamic attempts;
@property(retain, nonatomic) GCKPB_AuthContext *authContext; // @dynamic authContext;
@property(retain, nonatomic) GCKPB_BillingProfileData *billingProfileData; // @dynamic billingProfileData;
@property(retain, nonatomic) NSString *callingPackage; // @dynamic callingPackage;
@property(retain, nonatomic) GCKPB_CheckIabPromoData *checkIabPromoData; // @dynamic checkIabPromoData;
@property(nonatomic) long long clientLatencyMs; // @dynamic clientLatencyMs;
@property(retain, nonatomic) GCKPB_CreditCardEntryAction *creditCardEntryAction; // @dynamic creditCardEntryAction;
@property(retain, nonatomic) GCKPB_DeviceFeature *deviceFeature; // @dynamic deviceFeature;
@property(retain, nonatomic) NSString *document; // @dynamic document;
@property(nonatomic) int errorCode; // @dynamic errorCode;
@property(retain, nonatomic) NSString *exceptionType; // @dynamic exceptionType;
@property(retain, nonatomic) NSString *externalReferrer; // @dynamic externalReferrer;
@property(nonatomic) int fromSetting; // @dynamic fromSetting;
@property(nonatomic) _Bool hasAppData; // @dynamic hasAppData;
@property(nonatomic) _Bool hasAttempts; // @dynamic hasAttempts;
@property(nonatomic) _Bool hasAuthContext; // @dynamic hasAuthContext;
@property(nonatomic) _Bool hasBillingProfileData; // @dynamic hasBillingProfileData;
@property(nonatomic) _Bool hasCallingPackage; // @dynamic hasCallingPackage;
@property(nonatomic) _Bool hasCheckIabPromoData; // @dynamic hasCheckIabPromoData;
@property(nonatomic) _Bool hasClientLatencyMs; // @dynamic hasClientLatencyMs;
@property(nonatomic) _Bool hasCreditCardEntryAction; // @dynamic hasCreditCardEntryAction;
@property(nonatomic) _Bool hasDeviceFeature; // @dynamic hasDeviceFeature;
@property(nonatomic) _Bool hasDocument; // @dynamic hasDocument;
@property(nonatomic) _Bool hasErrorCode; // @dynamic hasErrorCode;
@property(nonatomic) _Bool hasExceptionType; // @dynamic hasExceptionType;
@property(nonatomic) _Bool hasExternalReferrer; // @dynamic hasExternalReferrer;
@property(nonatomic) _Bool hasFromSetting; // @dynamic hasFromSetting;
@property(nonatomic) _Bool hasHost; // @dynamic hasHost;
@property(nonatomic) _Bool hasLastUrl; // @dynamic hasLastUrl;
@property(nonatomic) _Bool hasNlpRepairStatus; // @dynamic hasNlpRepairStatus;
@property(nonatomic) _Bool hasOfferCheckoutFlowRequired; // @dynamic hasOfferCheckoutFlowRequired;
@property(nonatomic) _Bool hasOfferType; // @dynamic hasOfferType;
@property(nonatomic) _Bool hasOperationSuccess; // @dynamic hasOperationSuccess;
@property(nonatomic) _Bool hasReason; // @dynamic hasReason;
@property(nonatomic) _Bool hasReviewData; // @dynamic hasReviewData;
@property(nonatomic) _Bool hasRpcReport; // @dynamic hasRpcReport;
@property(nonatomic) _Bool hasSearchSuggestionReport; // @dynamic hasSearchSuggestionReport;
@property(nonatomic) _Bool hasServerLatencyMs; // @dynamic hasServerLatencyMs;
@property(nonatomic) _Bool hasServerLogsCookie; // @dynamic hasServerLogsCookie;
@property(nonatomic) _Bool hasSessionInfo; // @dynamic hasSessionInfo;
@property(nonatomic) _Bool hasToSetting; // @dynamic hasToSetting;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasWebViewPageLoadEvent; // @dynamic hasWebViewPageLoadEvent;
@property(nonatomic) _Bool hasWidgetEventData; // @dynamic hasWidgetEventData;
@property(nonatomic) _Bool hasWifiAutoUpdateAttempt; // @dynamic hasWifiAutoUpdateAttempt;
@property(retain, nonatomic) NSString *host; // @dynamic host;
@property(retain, nonatomic) NSString *lastUrl; // @dynamic lastUrl;
@property(retain, nonatomic) GCKPB_NlpRepairStatus *nlpRepairStatus; // @dynamic nlpRepairStatus;
@property(nonatomic) _Bool offerCheckoutFlowRequired; // @dynamic offerCheckoutFlowRequired;
@property(nonatomic) int offerType; // @dynamic offerType;
@property(nonatomic) _Bool operationSuccess; // @dynamic operationSuccess;
@property(retain, nonatomic) NSString *reason; // @dynamic reason;
@property(retain, nonatomic) GCKPB_ReviewData *reviewData; // @dynamic reviewData;
@property(retain, nonatomic) GCKPB_PlayStoreRpcReport *rpcReport; // @dynamic rpcReport;
@property(retain, nonatomic) GCKPB_SearchSuggestionReport *searchSuggestionReport; // @dynamic searchSuggestionReport;
@property(nonatomic) long long serverLatencyMs; // @dynamic serverLatencyMs;
@property(retain, nonatomic) NSData *serverLogsCookie; // @dynamic serverLogsCookie;
@property(retain, nonatomic) GCKPB_PlayStoreSessionData *sessionInfo; // @dynamic sessionInfo;
@property(nonatomic) int toSetting; // @dynamic toSetting;
@property(nonatomic) int type; // @dynamic type;
@property(retain, nonatomic) GCKPB_WebViewPageLoadEvent *webViewPageLoadEvent; // @dynamic webViewPageLoadEvent;
@property(retain, nonatomic) GCKPB_WidgetEventData *widgetEventData; // @dynamic widgetEventData;
@property(retain, nonatomic) GCKPB_WifiAutoUpdateAttempt *wifiAutoUpdateAttempt; // @dynamic wifiAutoUpdateAttempt;

@end

