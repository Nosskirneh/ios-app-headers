//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SPTUIPageService.h"

@interface SPTYourLibraryUIService : SPTUIPageService
{
    id <SPTYourLibraryService> _yourLibraryService;
}

+ (id)serviceIdentifier;
@property(nonatomic) __weak id <SPTYourLibraryService> yourLibraryService; // @synthesize yourLibraryService=_yourLibraryService;
- (void).cxx_destruct;
- (id)provideViewControllerForURI:(id)arg1 context:(id)arg2;
- (_Bool)claimsURI:(id)arg1;
- (void)configureMasterFeatureFlag:(id)arg1;
- (void)configureWithServices:(id)arg1;

@end

