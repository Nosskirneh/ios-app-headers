//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTConcertsEntityRowViewModel.h"

@class NSString, SPTConcertsArtistNameFormatter, SPTConcertsDateFormatter, SPTConcertsEntityRelatedConcert, SPTConcertsLogger;

@interface SPTConcertsEntityConcertRowViewModel : NSObject <SPTConcertsEntityRowViewModel>
{
    NSString *_subtitleText;
    NSString *_adornmentTitleText;
    NSString *_adornmentSubtitleText;
    SPTConcertsEntityRelatedConcert *_concert;
    SPTConcertsArtistNameFormatter *_artistNameFormatter;
    SPTConcertsDateFormatter *_dateFormatterProvider;
    SPTConcertsLogger *_logger;
    id <SPTLinkDispatcher> _linkDispatcher;
}

@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(readonly, nonatomic) SPTConcertsLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTConcertsDateFormatter *dateFormatterProvider; // @synthesize dateFormatterProvider=_dateFormatterProvider;
@property(readonly, nonatomic) SPTConcertsArtistNameFormatter *artistNameFormatter; // @synthesize artistNameFormatter=_artistNameFormatter;
@property(readonly, nonatomic) SPTConcertsEntityRelatedConcert *concert; // @synthesize concert=_concert;
- (void).cxx_destruct;
- (void)handleAccessoryTap;
- (void)handleTap;
@property(readonly, nonatomic) _Bool canBeTapped;
@property(readonly, copy, nonatomic) NSString *adornmentSubtitleText; // @synthesize adornmentSubtitleText=_adornmentSubtitleText;
@property(readonly, copy, nonatomic) NSString *adornmentTitleText; // @synthesize adornmentTitleText=_adornmentTitleText;
@property(readonly, copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property(readonly, copy, nonatomic) NSString *titleText;
@property(readonly, nonatomic) unsigned long long kind;
- (id)initWithConcert:(id)arg1 artistNameFormatter:(id)arg2 dateFormatterProvider:(id)arg3 linkDispatcher:(id)arg4 concertsLogger:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

