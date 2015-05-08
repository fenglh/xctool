//
// Copyright 2013 Facebook
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>

@interface OCUnitTestQueryRunner : NSObject
{
@private
  cpu_type_t _cpuType;
@protected
  NSDictionary *_buildSettings;
}

- (instancetype)initWithBuildSettings:(NSDictionary *)buildSettings
                          withCpuType:(cpu_type_t)cpuType;
- (NSTask *)createTaskForQuery NS_RETURNS_RETAINED;
- (void)prepareToRunQuery;
- (NSArray *)runQueryWithError:(NSString **)error;
- (NSString *)bundlePath;
- (NSString *)testHostPath;
- (cpu_type_t)cpuType;

@end
