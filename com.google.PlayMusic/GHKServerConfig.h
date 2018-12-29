//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface GHKServerConfig : NSObject <NSCoding>
{
    _Bool _disableExternalLinks;
    _Bool _disableSearch;
    _Bool _disableSendFeedback;
    _Bool _enableSmartCUFSuggestions;
    _Bool _enableInAssistantNativelyRenderedEmailForm;
    _Bool _enableWebViewSearchResults;
    _Bool _disableSearchResultsPrefetching;
    _Bool _enableStickySearchBar;
    _Bool _enableAlternateSearchBarIconTreatment;
    NSString *_productID;
    NSString *_productName;
    NSString *_externalHelpcenterName;
    NSString *_topLevelTopicURL;
    NSString *_contactCardPosition;
    NSString *_autocompleteClientName;
}

@property(nonatomic) _Bool enableAlternateSearchBarIconTreatment; // @synthesize enableAlternateSearchBarIconTreatment=_enableAlternateSearchBarIconTreatment;
@property(nonatomic) _Bool enableStickySearchBar; // @synthesize enableStickySearchBar=_enableStickySearchBar;
@property(nonatomic) _Bool disableSearchResultsPrefetching; // @synthesize disableSearchResultsPrefetching=_disableSearchResultsPrefetching;
@property(nonatomic) _Bool enableWebViewSearchResults; // @synthesize enableWebViewSearchResults=_enableWebViewSearchResults;
@property(nonatomic) _Bool enableInAssistantNativelyRenderedEmailForm; // @synthesize enableInAssistantNativelyRenderedEmailForm=_enableInAssistantNativelyRenderedEmailForm;
@property(nonatomic) _Bool enableSmartCUFSuggestions; // @synthesize enableSmartCUFSuggestions=_enableSmartCUFSuggestions;
@property(nonatomic) _Bool disableSendFeedback; // @synthesize disableSendFeedback=_disableSendFeedback;
@property(nonatomic) _Bool disableSearch; // @synthesize disableSearch=_disableSearch;
@property(nonatomic) _Bool disableExternalLinks; // @synthesize disableExternalLinks=_disableExternalLinks;
@property(copy, nonatomic) NSString *autocompleteClientName; // @synthesize autocompleteClientName=_autocompleteClientName;
@property(copy, nonatomic) NSString *contactCardPosition; // @synthesize contactCardPosition=_contactCardPosition;
@property(copy, nonatomic) NSString *topLevelTopicURL; // @synthesize topLevelTopicURL=_topLevelTopicURL;
@property(copy, nonatomic) NSString *externalHelpcenterName; // @synthesize externalHelpcenterName=_externalHelpcenterName;
@property(copy, nonatomic) NSString *productName; // @synthesize productName=_productName;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
