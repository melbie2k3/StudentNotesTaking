main:
	@GO111MODULE=off gomobile bind -target=ios --tags "json1 fts5" -o clients/Logger/Frameworks/LoggerKit.framework github.com/theHaL253/StudentNotesTaking/pkg/logger

test:
	@go test ./... --tags "json1 fts5"
