//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDMapServiceOverlayAsyncBaseOperation.h"

@class NSString;

@interface IDMapServiceOverlayHighlightLocationOperation : IDMapServiceOverlayAsyncBaseOperation
{
    NSString *_locationIdentifier;
}

@property(readonly) NSString *locationIdentifier; // @synthesize locationIdentifier=_locationIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)asyncMain;
- (id)initWithEtchSession:(id)arg1 mapServiceHandle:(long long)arg2;
- (id)initWithEtchSession:(id)arg1 mapServiceHandle:(long long)arg2 locationIdentifier:(id)arg3;

@end
