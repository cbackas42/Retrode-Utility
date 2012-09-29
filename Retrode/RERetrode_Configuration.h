//
//  RERetrode_Configuration.h
//  Retrode
//
//  Created by Christoph Leimbrock on 29.09.12.
//  Copyright (c) 2012 Christoph Leimbrock. All rights reserved.
//

#import "RERetrode.h"

@interface RERetrode ()

- (void)readConfiguration;
- (void)writeConfiguration;
- (NSString*)configurationFilePath;

@property (copy)   NSString            *deviceVersion;
@property (copy)   NSString            *firmwareVersion;
@property (strong) NSMutableDictionary *configuration;
@property (strong) NSArray             *configurationLineMapping;
@end
