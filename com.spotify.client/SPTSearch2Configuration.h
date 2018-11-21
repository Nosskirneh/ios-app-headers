//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableDictionary, NSString, NSURL;
@protocol SPTSearch2EmptyStatePropertiesProvider, SPTSearch2URLProviding;

@interface SPTSearch2Configuration : NSObject <NSCopying>
{
    _Bool _inAssistedCurationContext;
    _Bool _offlineSearchEnabled;
    _Bool _autocompleteEnabled;
    NSString *_recentsGroupID;
    id <SPTSearch2URLProviding> _urlProvider;
    struct NSMutableDictionary *_customCommandHandlers;
    struct NSMutableDictionary *_customComponentNamespaces;
    id <SPTSearch2EmptyStatePropertiesProvider> _emptyStatePropertiesProvider;
    NSString *_customPageIdentifer;
    NSURL *_customPageURI;
}

@property(nonatomic, getter=isAutocompleteEnabled) _Bool autocompleteEnabled; // @synthesize autocompleteEnabled=_autocompleteEnabled;
@property(copy, nonatomic) NSURL *customPageURI; // @synthesize customPageURI=_customPageURI;
@property(copy, nonatomic) NSString *customPageIdentifer; // @synthesize customPageIdentifer=_customPageIdentifer;
@property(nonatomic) _Bool offlineSearchEnabled; // @synthesize offlineSearchEnabled=_offlineSearchEnabled;
@property(retain, nonatomic) id <SPTSearch2EmptyStatePropertiesProvider> emptyStatePropertiesProvider; // @synthesize emptyStatePropertiesProvider=_emptyStatePropertiesProvider;
@property(nonatomic, getter=isInAssistedCurationContext) _Bool inAssistedCurationContext; // @synthesize inAssistedCurationContext=_inAssistedCurationContext;
@property(readonly, nonatomic) NSMutableDictionary *customComponentNamespaces; // @synthesize customComponentNamespaces=_customComponentNamespaces;
@property(readonly, nonatomic) NSMutableDictionary *customCommandHandlers; // @synthesize customCommandHandlers=_customCommandHandlers;
@property(retain, nonatomic) id <SPTSearch2URLProviding> urlProvider; // @synthesize urlProvider=_urlProvider;
@property(copy, nonatomic) NSString *recentsGroupID; // @synthesize recentsGroupID=_recentsGroupID;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURLProvider:(id)arg1 recentsGroupID:(id)arg2 emptyStatePropertiesProvider:(id)arg3;

@end

