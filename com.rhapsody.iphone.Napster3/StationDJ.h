//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CarIntegrationDataTranslator, NSArray, NSDictionary, _TtC7Napster20RemoteCommandService;
@protocol StationDJDelegate;

@interface StationDJ : NSObject
{
    id <StationDJDelegate> _delegate;
    CarIntegrationDataTranslator *_dataTranslator;
    NSDictionary *_curatedGenresToStationIds;
    NSArray *_curatedGenreNamesSorted;
}

@property(retain, nonatomic) NSArray *curatedGenreNamesSorted; // @synthesize curatedGenreNamesSorted=_curatedGenreNamesSorted;
@property(retain, nonatomic) NSDictionary *curatedGenresToStationIds; // @synthesize curatedGenresToStationIds=_curatedGenresToStationIds;
@property(retain, nonatomic) CarIntegrationDataTranslator *dataTranslator; // @synthesize dataTranslator=_dataTranslator;
@property __weak id <StationDJDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) _TtC7Napster20RemoteCommandService *remoteCommandService;
- (void)initCuratedGenresToStationIds;
- (id)curatedStationGenres;
- (void)getGenresForProgrammedRadioWithBlock:(CDUnknownBlockType)arg1;
- (void)getStationsForGenre:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)playStationForCuratedGenre:(id)arg1;
- (void)playStation:(id)arg1;
- (void)getLibraryStationsWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end

